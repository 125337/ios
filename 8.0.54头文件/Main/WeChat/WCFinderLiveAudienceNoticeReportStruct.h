@interface WCFinderLiveAudienceNoticeReportStruct : NSObject
{
    NSString * _finderUsername; // +0x8
    unsigned long long _actionType; // +0x10
    unsigned long long _enterLiveID; // +0x18
    unsigned long long _enterStatus; // +0x20
    NSString * _commentScene; // +0x28
    NSString * _sceneNote; // +0x30
    NSString * _addData; // +0x38
    NSString * _forceNoticeID; // +0x40
    NSString * _noticeType; // +0x48
    NSString * _feedID; // +0x50
    NSString * _sessionBuffer; // +0x58
    NSMutableDictionary * _channelExtra; // +0x60
    NSString * _channelExtraString; // +0x68
    NSMutableDictionary * _scene; // +0x70
    FinderLiveNoticeInfo * _noticeInfo; // +0x78
}
+ (id)replaceCommaToSemicolon:(id)arg1;
- (id)init;
- (id)toLogStr;
- (id)toLogStrForForceNotice;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)enterLiveID;
- (void)setEnterLiveID:(unsigned long long)arg1;
- (unsigned long long)enterStatus;
- (void)setEnterStatus:(unsigned long long)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)addData;
- (void)setAddData:(id)arg1;
- (id)forceNoticeID;
- (void)setForceNoticeID:(id)arg1;
- (id)noticeType;
- (void)setNoticeType:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)channelExtra;
- (void)setChannelExtra:(id)arg1;
- (id)channelExtraString;
- (void)setChannelExtraString:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (void).cxx_destruct;
@end

