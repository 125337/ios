@interface WAEJBindingGlobalUtils : WAEJBindingEventedBase
{
    NSString * deviceName; // +0x30
    int audioSession; // +0x38
    OpaqueJSString * jsAllObjectsIdentifier; // +0x40
    char * _commandString; // +0x48
    unsigned long long _commandLength; // +0x50
    BOOL _newInstance; // +0x58
}
+ (void *)_ptr_to_func_log;
+ (void *)_ptr_to_func_load;
+ (void *)_ptr_to_func_include;
+ (void *)_ptr_to_func_loadFont;
+ (void *)_ptr_to_func_requestAnimationFrame;
+ (void *)_ptr_to_func_cancelAnimationFrame;
+ (void *)_ptr_to_func_setPreferredFramesPerSecond;
+ (void *)_ptr_to_func_setTimeout;
+ (void *)_ptr_to_func_setInterval;
+ (void *)_ptr_to_func_clearTimeout;
+ (void *)_ptr_to_func_clearInterval;
+ (void *)_ptr_to_func_performanceNow;
+ (void *)_ptr_to_func_performanceNowUs;
+ (void *)_ptr_to_func_recordFrame;
+ (void *)_ptr_to_func_getTextLineHeight;
+ (void *)_ptr_to_get_devicePixelRatio;
+ (void *)_ptr_to_get_screenWidth;
+ (void *)_ptr_to_get_screenHeight;
+ (void *)_ptr_to_get_userAgent;
+ (void *)_ptr_to_get_platform;
+ (void *)_ptr_to_get_language;
+ (void *)_ptr_to_get_appVersion;
+ (void *)_ptr_to_get_orientation;
+ (void *)_ptr_to_get_onLine;
+ (void *)_ptr_to_get_allowSleepMode;
+ (void *)_ptr_to_set_allowSleepMode;
+ (void *)_ptr_to_get_otherAudioPlaying;
+ (void *)_ptr_to_get_audioSession;
+ (void *)_ptr_to_set_audioSession;
+ (void *)_ptr_to_func_encodeArrayBuffer;
+ (void *)_ptr_to_func_decodeArrayBuffer;
+ (void *)_ptr_to_func_startProfile;
+ (void *)_ptr_to_func_stopProfile;
+ (void *)_ptr_to_func_getProfileResult;
+ (void *)_ptr_to_func_batchRender;
+ (void *)_ptr_to_func_readFileSync;
+ (void *)_ptr_to_func_decodeVarintArray;
+ (void *)_ptr_to_func_decodeUint64Array;
+ (void *)_ptr_to_func_createSignal;
+ (void *)_ptr_to_get_onbindingobjectdestruct;
+ (void *)_ptr_to_set_onbindingobjectdestruct;
+ (void *)_ptr_to_func_getSystemInfo;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)dealloc;
- (void)prepareGarbageCollection;
- (id)deviceName;
- (OpaqueJSValue *)_func_log:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_load:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_include:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_loadFont:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_requestAnimationFrame:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_cancelAnimationFrame:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_setPreferredFramesPerSecond:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_setTimeout:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_setInterval:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_clearTimeout:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_clearInterval:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_performanceNow:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_performanceNowUs:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_recordFrame:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_getTextLineHeight:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_get_devicePixelRatio:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_screenWidth:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_screenHeight:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_userAgent:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_platform:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_language:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_appVersion:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_orientation:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_onLine:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_allowSleepMode:(OpaqueJSContext *)arg1;
- (void)_set_allowSleepMode:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_otherAudioPlaying:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_audioSession:(OpaqueJSContext *)arg1;
- (void)_set_audioSession:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (int)audioSession;
- (void)setAudioSession:(int)arg1;
- (id)dataWithEncodingString:(id)arg1 encoding:(id)arg2;
- (id)stringWithEncodingData:(id)arg1 encoding:(id)arg2;
- (OpaqueJSValue *)_func_encodeArrayBuffer:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_decodeArrayBuffer:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_startProfile:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_stopProfile:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_getProfileResult:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (void)triggerDestructBindingObjectEvent:(unsigned long long)arg1;
- (OpaqueJSValue *)_func_batchRender:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_readFileSync:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_decodeVarintArray:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_decodeUint64Array:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_createSignal:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_getSystemInfo:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
@end

