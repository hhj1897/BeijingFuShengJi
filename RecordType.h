// RecordType.h: interface for the RecordType class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RECORDTYPE_H__0C0815EE_1EFC_4009_9255_BCC27AF8E6EA__INCLUDED_)
#define AFX_RECORDTYPE_H__0C0815EE_1EFC_4009_9255_BCC27AF8E6EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class RecordType  
{
public:
	long money;
    char name[100];
	RecordType();
	virtual ~RecordType();

};

#endif // !defined(AFX_RECORDTYPE_H__0C0815EE_1EFC_4009_9255_BCC27AF8E6EA__INCLUDED_)
