#ifndef COREMETB
#define COREMETB
#include <glog/logging.h>
#include <protocol/TBinaryProtocol.h>
#include "CoreVcl_.hpp"
#include "CoreTble.hpp"
#include "CorePool.hpp"
#include "CoreStix.hpp"
#include "CoreSoix.hpp"
#include "CoreList.hpp"
#include "CoreFsys.hpp"
#include "CoreSmph.hpp"
#include "PrtoAlog.pb.h"

namespace orion {

class CoreMetb : public CoreTble
{
protected:
  using CoreTble::get__;

public:

	typedef boost::shared_ptr<CoreMetb> PTR;
	typedef struct {
		unsigned int iVsize;
		void* vVdata;
	} DATALOC;

private:
	AnsiString sVid;
	AnsiString sVcachegetkeyinput;
	AnsiString sVcachegetkeyoutput;
	CoreList<DATALOC> cVdatalist;
	PTR_POOL cVpool;
	PTR_CUSTOMSORTEDINDEX cVsortedindex;
	PTR_FILESYSTEM cVserializer;
	CoreSmph cVmutex;
	int iVmaxindex;
	CUSTOMSORTEDINDEXPOS iVcachegetkey;
	unsigned int iVchunk;
	unsigned int iVcurrentsize;
	unsigned int iVmaxsize;
	unsigned int iVchunksize;

	unsigned int __fastcall clear (int iV);

public:
	__fastcall CoreMetb ();
	__fastcall CoreMetb (PTR_POOL cPool, AnsiString sId, int iMaxindex, int iMaxsize, int iChunksize);
  __fastcall ~CoreMetb ();

	void __fastcall init (PTR_POOL cPool, AnsiString sId, int iMaxindex, int iMaxsize, int iChunksize);
	void __fastcall setmx (int iMaxindex, int iMaxsize, int iChunksize);

	bool __fastcall put__ (AnsiString sKey, int iMainindexlength, unsigned int iValue, void* vValue);
	bool __fastcall put__ (AnsiString sKey, int iMainindexlength, PrtoLval* cValue = NULL);
	bool __fastcall delte (AnsiString sKey, int iMainindexlength);
	void __fastcall clear ();
	bool __fastcall get__ (AnsiString& sKey, PrtoLval* cValue);
	AnsiString __fastcall getid ();

	AnsiString __fastcall debug ();
	unsigned int __fastcall getsd ();
	unsigned int __fastcall getrs ();
	unsigned int __fastcall getma ();
	int __fastcall getsc ();
	PTR_CUSTOMSORTEDINDEX __fastcall getsx ();

	bool __fastcall full_ ();
	bool __fastcall chunk ();
	bool __fastcall getdt (	CUSTOMSORTEDINDEXPOS iLoc, AnsiString& sKey, int& iMainindexlength,
													unsigned int& iValue, void** vValue);


};

};


#endif