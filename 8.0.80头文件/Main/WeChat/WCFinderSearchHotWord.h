@interface WCFinderSearchHotWord : NSObject <PBCoding>
{
    NSString * _hotwordText; // +0x8
    unsigned long long _actionType; // +0x10
    NSString * _link; // +0x18
    NSString * _appid; // +0x20
    NSData * _sessionBuffer; // +0x28
    NSString * _reasonWording; // +0x30
    FinderEventInfo * _eventInfo; // +0x38
    unsigned long long _hotwordId; // +0x40
    NSString * _requestId; // +0x48
}
+ (void)PBArrayAdd_hotwordText;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_link;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_reasonWording;
+ (void)PBArrayAdd_eventInfo;
+ (void)PBArrayAdd_hotwordId;
+ (void)PBArrayAdd_requestId;
+ (void)initialize;
+ (id)genWithDict:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)genRequestId;
- (id)getPBPropertyTable;
- (id)initWithFinderSearchHotWord:(id)arg1 requestId:(id)arg2;
- (id)initWithNativeSearchParams:(id)arg1 requestId:(id)arg2;
- (id)description;
- (id)hotwordText;
- (void)setHotwordText:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)reasonWording;
- (void)setReasonWording:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (unsigned long long)hotwordId;
- (void)setHotwordId:(unsigned long long)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void).cxx_destruct;
@end
