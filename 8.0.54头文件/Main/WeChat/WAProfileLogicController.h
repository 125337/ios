@interface WAProfileLogicController : MMObject <IWAProfileServiceExt, WAContactMgrExtension>
{
    NSString * _userName; // +0x8
    NSMutableDictionary * _sectonType2RowNum; // +0x10
    id /* block */ _requestProfileDataCompleteBlock; // +0x18
    BOOL _bProfileResponseDataReturned; // +0x20
    GetProfileInfoResponse * _profileResponseData; // +0x28
    WAContact * _contact; // +0x30
}
+ (double)localCacheAverageScoreWithUserName:(id)arg1;
+ (id)localCacheCommentInfoWithUserName:(id)arg1;
+ (id)localCachePageInfoWithUserName:(id)arg1;
- (id)initWithUsername:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)requestProfileData:(id /* block */)arg1 parameter:(id)arg2;
- (void)onFetchProfileInfo:(id)arg1 userName:(id)arg2;
- (void)tryNotifyProfileDataReady;
- (id)evaluateBasicInfo;
- (id)previewMediaList;
- (id)friendLikeList;
- (id)relatedBrandList;
- (id)newRelateWeappList;
- (id)brandRegisterTitle;
- (id)officicalUrl;
- (id)guarantUrl;
- (id)profilePageInfo;
- (id)commentInfo;
- (double)averageScore;
- (id)profileResponseData;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)bProfileResponseDataReturned;
- (void)setBProfileResponseDataReturned:(BOOL)arg1;
- (void).cxx_destruct;
@end

