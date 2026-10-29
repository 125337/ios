@interface BrandProfileReporter : NSObject <PBMessageObserverDelegate>
{
    unsigned int _enterTimestamp; // +0x8
    BOOL _hasReportedUrgePublishExposure; // +0xc
    unsigned int _enterScene; // +0x10
    NSString * _enterSearchID; // +0x18
    CContact * _brandContact; // +0x20
    BizProfileV2Resp * _cacheItem; // +0x28
    NSString * _searchClickId; // +0x30
    NSString * _profileTracePageId; // +0x38
    BrandProfileEnterInfo * _profileEnterInfo; // +0x40
}
+ (void)report39188WithActionType:(unsigned int)arg1 scene:(unsigned int)arg2 bizUsername:(id)arg3;
+ (void)report39189WithScene:(unsigned int)arg1 actionType:(unsigned int)arg2 bizUsername:(id)arg3 profileTracePageId:(id)arg4;
- (id)initWithEnterTimeStamp:(unsigned int)arg1;
- (unsigned int)enterTimestamp;
- (void)report39188WithActionType:(unsigned int)arg1 scene:(unsigned int)arg2;
- (id)report10298StringValue:(id)arg1;
- (unsigned long long)report10298UInt64Value:(id)arg1;
- (unsigned int)report10298BizUinValue:(id)arg1;
- (id)report10298RefererParams;
- (void)report10298WhenEnter;
- (void)report10298WhenExit;
- (void)report10298WithUserName:(id)arg1 scene:(unsigned int)arg2;
- (unsigned int)reportBrandType;
- (id)reportShowFuwuList;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2 subFuwu:(id)arg3 subFuwuIdx:(unsigned long long)arg4;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 singleBizUin:(unsigned int)arg3;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 sessionIdStr:(id)arg4;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 contentUrl:(id)arg4;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 contentUrl:(id)arg4 itemShowType:(unsigned int)arg5;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 contentUrl:(id)arg4 singleBizUin:(unsigned int)arg5 itemShowType:(unsigned int)arg6;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 sessionIdStr:(id)arg4 contentUrl:(id)arg5 singleBizUin:(unsigned int)arg6 itemShowType:(unsigned int)arg7;
- (void)report17523WhenExposure:(id)arg1;
- (void)report17523WhenClick:(id)arg1;
- (void)report17748WhenRejectRecieveMsg;
- (void)report21647WhenExposure:(long long)arg1;
- (void)report21647WhenClick:(long long)arg1;
- (void)report21648WhenClick:(id)arg1;
- (void)report21648WhenUnfold;
- (void)report22118WhenExposure;
- (void)report22118WhenClick;
- (void)reportBizCommToSvr:(id)arg1 businessType:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)enterSearchID;
- (void)setEnterSearchID:(id)arg1;
- (id)brandContact;
- (void)setBrandContact:(id)arg1;
- (id)cacheItem;
- (void)setCacheItem:(id)arg1;
- (id)searchClickId;
- (void)setSearchClickId:(id)arg1;
- (id)profileTracePageId;
- (void)setProfileTracePageId:(id)arg1;
- (id)profileEnterInfo;
- (void)setProfileEnterInfo:(id)arg1;
- (void).cxx_destruct;
@end
