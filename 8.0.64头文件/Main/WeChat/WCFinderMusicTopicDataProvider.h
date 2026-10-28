@interface WCFinderMusicTopicDataProvider : NSObject
{
    int _commentScene; // +0x8
    NSString * _registerExtKey; // +0x10
    NSString * _feedId; // +0x18
    unsigned long long _musicTopicId; // +0x20
    NSString * _encryptedMusicId; // +0x28
    NSData * _byPassInfo; // +0x30
    NSString * _refObjectid; // +0x38
    id /* block */ _block; // +0x40
    NSMutableDictionary * _listRespInfoDic; // +0x48
    NSMutableDictionary * _cgiPromiseDic; // +0x50
    NSMutableDictionary * _loadingStateDic; // +0x58
}
- (id)initMusicTopicId:(unsigned long long)arg1 encryptedMusicId:(id)arg2 byPassInfo:(id)arg3 commentScene:(int)arg4 refObjectid:(id)arg5;
- (id)loadingStateDic;
- (id)listRespInfoDic;
- (id)cgiPromiseDic;
- (void)fetchDataByInnerType:(int)arg1;
- (void)updateProviderByOutterByInnerType:(int)arg1 lastBuff:(id)arg2 continueFlag:(BOOL)arg3 upContinueFlag:(BOOL)arg4 downContinueFlag:(BOOL)arg5 totalCount:(unsigned long long)arg6 dataArray:(id)arg7 topicInfo:(id)arg8 similarFlag:(BOOL)arg9 poiTopicRecommendArray:(id)arg10 subTitle:(id)arg11 bgmInfo:(id)arg12 feedFollowPermissonFlag:(unsigned int)arg13 disabledFlag:(unsigned int)arg14;
- (BOOL)containTargetInnerType:(int)arg1;
- (BOOL)svrDataAvailable;
- (id)getTargetContentVMArrayByInnerType:(int)arg1;
- (id)getTargetDetailViewModelByInnerType:(int)arg1;
- (id)getCgiPromiseArray;
- (id)getTargetLoadingStateByInnerType:(int)arg1;
- (id)registerExtKey;
- (void)setRegisterExtKey:(id)arg1;
- (id)feedId;
- (unsigned long long)musicTopicId;
- (void)setMusicTopicId:(unsigned long long)arg1;
- (id)encryptedMusicId;
- (void)setEncryptedMusicId:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void)setListRespInfoDic:(id)arg1;
- (void)setCgiPromiseDic:(id)arg1;
- (void)setLoadingStateDic:(id)arg1;
- (void).cxx_destruct;
@end
