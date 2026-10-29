@interface WCTimelineEditBehaviorReporter : NSObject
{
    WCTimelineEditBehaviorInfo * _info; // +0x8
}
+ (id)sharedInstance;
- (void)resetReporterStatus;
- (void)resetReporterStatusWithPostReportSession:(id)arg1;
- (void)updatePostPrivacy:(long long)arg1;
- (long long)convertPostPrivacy:(long long)arg1;
- (void)updateTimelineStatueCancel:(BOOL)arg1;
- (void)updateTimelineStatusPost;
- (void)updateSelectedChatroom:(id)arg1;
- (void)updateSelectedContact:(id)arg1;
- (void)updateSelectedContactlabel:(id)arg1;
- (void)chatroomDetailClickCount:(id)arg1;
- (void)visibleSettingClickCount;
- (void)importFromContactClickCount;
- (void)importFromChatroomClickCount;
- (void)clickLatestSetting;
- (void)updatePublishID:(id)arg1;
- (void)updateDynamicTagFlag:(BOOL)arg1;
- (void)updateEditEnterScene:(unsigned long long)arg1;
- (void)updatePreviousPrivacy:(long long)arg1;
- (void)addTagsToSelectFriendFromTags:(id)arg1;
- (void)didEnterPrivacySettingPage;
- (void)didLeavePrivacySettingPage;
- (void)didEnterSelectFriendPage;
- (void)didLeaveSelectFriendPage;
- (void)didEnterSelectFriendFromGroupPage;
- (void)didLeaveSelectFriendFromGroupPage;
- (void)didEnterSelectFriendFromTagPage;
- (void)didLeaveSelectFriendFromTagPage;
- (void)didEnterSelectTagPage;
- (void)didLeaveSelectTagPage;
- (void)didSelectTagFromSearch:(id)arg1 privacy:(long long)arg2;
- (void)didSelectTagCountFromSearchForImport:(unsigned long long)arg1;
- (void)kvDataReport;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end

