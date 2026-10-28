@interface BrandProfileReporter : NSObject <PBMessageObserverDelegate>
{
    unsigned int _enterTimestamp; // +0x8
    unsigned int _enterScene; // +0xc
    NSString * _enterSearchID; // +0x10
    CContact * _brandContact; // +0x18
    BizProfileV2Resp * _cacheItem; // +0x20
    NSString * _searchClickId; // +0x28
    BrandProfileEnterInfo * _profileEnterInfo; // +0x30
}
- (id)initWithEnterTimeStamp:(unsigned int)arg1;
- (unsigned int)enterTimestamp;
- (void)report10298WhenEnter;
- (void)report10298WhenExit;
- (void)report10298WithUserName:(id)arg1 scene:(unsigned int)arg2;
- (unsigned int)reportBrandType;
- (id)reportShowFuwuList;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2 subFuwu:(id)arg3 subFuwuIdx:(unsigned long long)arg4;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 sessionIdStr:(id)arg4;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 contentUrl:(id)arg4;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2 fromTab:(unsigned int)arg3 sessionIdStr:(id)arg4 contentUrl:(id)arg5;
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
- (id)profileEnterInfo;
- (void)setProfileEnterInfo:(id)arg1;
- (void).cxx_destruct;
@end
