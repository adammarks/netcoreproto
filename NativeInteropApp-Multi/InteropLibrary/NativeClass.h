#pragma once

#pragma once

#ifdef AV_STREAM_ENCODER_DLL_EXPORTS
#    define AV_STREAM_ENCODER_DECLSPECIFIER __declspec(dllexport)
#    define AV_STREAM_ENCODER_TEMPLATE
#else
#    define AV_STREAM_ENCODER_DECLSPECIFIER __declspec(dllimport)
#    define AV_STREAM_ENCODER_TEMPLATE extern
#endif


class AV_STREAM_ENCODER_DECLSPECIFIER NativeClass
{
public:
	NativeClass() {
	}

	int Test(int a, int b, int c)
	{
		return a + b + c;
	}
};

