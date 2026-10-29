@interface WCFinderJumpNativeSearchParams : NSObject
{
    int _scene; // +0x8
    NSString * _feedTid; // +0x10
    unsigned long long _streamEntranceType; // +0x18
    WCFinderJumpNativeHotWord * _objectHotWord; // +0x20
    NSString * _objHotwordInfoBuffString; // +0x28
    NSData * _objHotwordInfoBuff; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)objHotwordInfoBuff;
- (id)feedTid;
- (void)setFeedTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)streamEntranceType;
- (void)setStreamEntranceType:(unsigned long long)arg1;
- (id)objectHotWord;
- (void)setObjectHotWord:(id)arg1;
- (id)objHotwordInfoBuffString;
- (void)setObjHotwordInfoBuffString:(id)arg1;
- (void)setObjHotwordInfoBuff:(id)arg1;
- (void).cxx_destruct;
@end

