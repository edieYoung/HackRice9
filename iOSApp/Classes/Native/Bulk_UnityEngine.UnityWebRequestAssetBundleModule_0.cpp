#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AssetBundle
struct AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;

extern RuntimeClass* DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var;
extern String_t* _stringLiteralF030BBBD32966CDE41037B98A8849C46B76E4BC1;
extern const RuntimeMethod* DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_m5520F3EE1C7145E5B6D77066B0DBE473E9CC7D1B_RuntimeMethod_var;
extern const uint32_t DownloadHandlerAssetBundle_GetContent_mA39FD9C402592881680017B080D72337F708A287_MetadataUsageId;
extern const uint32_t UnityWebRequestAssetBundle_GetAssetBundle_m7B84478DA8C074ACED6A71C3A8E434335E7D803C_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;



#ifndef U3CMODULEU3E_T6B2F395C0AF393CE118C7CEA4AD8977C67905DAD_H
#define U3CMODULEU3E_T6B2F395C0AF393CE118C7CEA4AD8977C67905DAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6B2F395C0AF393CE118C7CEA4AD8977C67905DAD 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6B2F395C0AF393CE118C7CEA4AD8977C67905DAD_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef UNITYWEBREQUESTASSETBUNDLE_T899D29BC09ED70C93682042E8087261335E7EDEA_H
#define UNITYWEBREQUESTASSETBUNDLE_T899D29BC09ED70C93682042E8087261335E7EDEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAssetBundle
struct  UnityWebRequestAssetBundle_t899D29BC09ED70C93682042E8087261335E7EDEA  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWEBREQUESTASSETBUNDLE_T899D29BC09ED70C93682042E8087261335E7EDEA_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#define CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifndef DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#define DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifndef UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#define UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef ASSETBUNDLE_TCE287BAB693894C3991CDD308B92A8C9C4BD4C78_H
#define ASSETBUNDLE_TCE287BAB693894C3991CDD308B92A8C9C4BD4C78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_TCE287BAB693894C3991CDD308B92A8C9C4BD4C78_H
#ifndef DOWNLOADHANDLERASSETBUNDLE_TEA13E51CCB3412AD09F36186F924CE375759A939_H
#define DOWNLOADHANDLERASSETBUNDLE_TEA13E51CCB3412AD09F36186F924CE375759A939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerAssetBundle
struct  DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939  : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_pinvoke : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_com : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
};
#endif // DOWNLOADHANDLERASSETBUNDLE_TEA13E51CCB3412AD09F36186F924CE375759A939_H
#ifndef UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#define UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H


// !!0 UnityEngine.Networking.DownloadHandler::GetCheckedDownloader<System.Object>(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DownloadHandler_GetCheckedDownloader_TisRuntimeObject_mFFB60A2FC33EF784435EA688F93E0FC868D2463C_gshared (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * p0, const RuntimeMethod* method);

// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m39F80F1C9B379B0D0362DF9264DE42604BDB24E0 (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundle(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerAssetBundle_InternalCreateAssetBundle_m4A8DF4FEFAA7A192CAA269AC3EC7D801FC949B4F (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * __this, String_t* ___url0, uint32_t ___crc1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t DownloadHandlerAssetBundle_Create_mF2BE2489505217F7017337C5D8D1BB379C99E172 (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * ___obj0, String_t* ___url1, uint32_t ___crc2, const RuntimeMethod* method);
// !!0 UnityEngine.Networking.DownloadHandler::GetCheckedDownloader<UnityEngine.Networking.DownloadHandlerAssetBundle>(UnityEngine.Networking.UnityWebRequest)
inline DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_m5520F3EE1C7145E5B6D77066B0DBE473E9CC7D1B (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * p0, const RuntimeMethod* method)
{
	return ((  DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * (*) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *, const RuntimeMethod*))DownloadHandler_GetCheckedDownloader_TisRuntimeObject_mFFB60A2FC33EF784435EA688F93E0FC868D2463C_gshared)(p0, method);
}
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle()
extern "C" IL2CPP_METHOD_ATTR AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * DownloadHandlerAssetBundle_get_assetBundle_mC9081BC84B18ED108B8AA06C104985F62AFBD589 (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestAssetBundle_GetAssetBundle_m7B84478DA8C074ACED6A71C3A8E434335E7D803C (String_t* ___uri0, uint32_t ___crc1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerAssetBundle__ctor_m1B3026A98DBBB87D338779CE3FB78F0882D3F833 (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * __this, String_t* ___url0, uint32_t ___crc1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m0D2F8F3E1202EF4256D17E91B95DB6CC673FC8D6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* p0, String_t* p1, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * p2, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * p3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerAssetBundle
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke(const DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939& unmarshaled, DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke_back(const DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_pinvoke& marshaled, DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerAssetBundle
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke_cleanup(DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerAssetBundle
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_com(const DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939& unmarshaled, DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_com_back(const DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_com& marshaled, DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerAssetBundle
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_com_cleanup(DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerAssetBundle__ctor_m1B3026A98DBBB87D338779CE3FB78F0882D3F833 (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * __this, String_t* ___url0, uint32_t ___crc1, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m39F80F1C9B379B0D0362DF9264DE42604BDB24E0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		uint32_t L_1 = ___crc1;
		DownloadHandlerAssetBundle_InternalCreateAssetBundle_m4A8DF4FEFAA7A192CAA269AC3EC7D801FC949B4F(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t DownloadHandlerAssetBundle_Create_mF2BE2489505217F7017337C5D8D1BB379C99E172 (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * ___obj0, String_t* ___url1, uint32_t ___crc2, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerAssetBundle_Create_mF2BE2489505217F7017337C5D8D1BB379C99E172_ftn) (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 *, String_t*, uint32_t);
	static DownloadHandlerAssetBundle_Create_mF2BE2489505217F7017337C5D8D1BB379C99E172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAssetBundle_Create_mF2BE2489505217F7017337C5D8D1BB379C99E172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32)");
	intptr_t retVal = _il2cpp_icall_func(___obj0, ___url1, ___crc2);
	return retVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundle(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerAssetBundle_InternalCreateAssetBundle_m4A8DF4FEFAA7A192CAA269AC3EC7D801FC949B4F (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * __this, String_t* ___url0, uint32_t ___crc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___url0;
		uint32_t L_1 = ___crc1;
		intptr_t L_2 = DownloadHandlerAssetBundle_Create_mF2BE2489505217F7017337C5D8D1BB379C99E172(__this, L_0, L_1, /*hidden argument*/NULL);
		((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)__this)->set_m_Ptr_0((intptr_t)L_2);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle()
extern "C" IL2CPP_METHOD_ATTR AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * DownloadHandlerAssetBundle_get_assetBundle_mC9081BC84B18ED108B8AA06C104985F62AFBD589 (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * __this, const RuntimeMethod* method)
{
	typedef AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * (*DownloadHandlerAssetBundle_get_assetBundle_mC9081BC84B18ED108B8AA06C104985F62AFBD589_ftn) (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 *);
	static DownloadHandlerAssetBundle_get_assetBundle_mC9081BC84B18ED108B8AA06C104985F62AFBD589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAssetBundle_get_assetBundle_mC9081BC84B18ED108B8AA06C104985F62AFBD589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle()");
	AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::GetContent(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * DownloadHandlerAssetBundle_GetContent_mA39FD9C402592881680017B080D72337F708A287 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandlerAssetBundle_GetContent_mA39FD9C402592881680017B080D72337F708A287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * V_0 = NULL;
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = ___www0;
		DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * L_1 = DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_m5520F3EE1C7145E5B6D77066B0DBE473E9CC7D1B(L_0, /*hidden argument*/DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_m5520F3EE1C7145E5B6D77066B0DBE473E9CC7D1B_RuntimeMethod_var);
		NullCheck(L_1);
		AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * L_2 = DownloadHandlerAssetBundle_get_assetBundle_mC9081BC84B18ED108B8AA06C104985F62AFBD589(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestAssetBundle_GetAssetBundle_m2532648FD093F0C4EAE63B3E419F12287646850B (String_t* ___uri0, const RuntimeMethod* method)
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_0 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_1 = UnityWebRequestAssetBundle_GetAssetBundle_m7B84478DA8C074ACED6A71C3A8E434335E7D803C(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestAssetBundle_GetAssetBundle_m7B84478DA8C074ACED6A71C3A8E434335E7D803C (String_t* ___uri0, uint32_t ___crc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequestAssetBundle_GetAssetBundle_m7B84478DA8C074ACED6A71C3A8E434335E7D803C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_0 = NULL;
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		String_t* L_1 = ___uri0;
		uint32_t L_2 = ___crc1;
		DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 * L_3 = (DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939 *)il2cpp_codegen_object_new(DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_il2cpp_TypeInfo_var);
		DownloadHandlerAssetBundle__ctor_m1B3026A98DBBB87D338779CE3FB78F0882D3F833(L_3, L_1, L_2, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)il2cpp_codegen_object_new(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m0D2F8F3E1202EF4256D17E91B95DB6CC673FC8D6(L_4, L_0, _stringLiteralF030BBBD32966CDE41037B98A8849C46B76E4BC1, L_3, (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_5 = V_0;
		V_1 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
