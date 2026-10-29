@interface BrandNotificationMsgMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _notificationDigestMMKV; // +0x8
    BrandNotificationPriorityItem * _priorityItem; // +0x10
}
+ (BOOL)isBrandAttributedNotifyMsgOpen;
+ (BOOL)canHandleBrandAttributedNotifyMsg:(id)arg1;
+ (BOOL)canHandleBrandFusionSummary:(id)arg1;
+ (BOOL)canGetNotifyMsgNodeFromMsgSource:(id)arg1;
+ (BOOL)canNotAddDB:(id)arg1;
+ (BOOL)isMyBizNotifyMsg:(id)arg1;
+ (BOOL)isBrandNotificationIsFromBrandTemplateMsgHolder:(id)arg1;
+ (id)genAttributedContentWithReaderWrapNotifyMsgDigestItem:(id)arg1;
+ (id)genAttributedContentWithReaderWrapNotifyMsgDigestItem:(id)arg1 isMerge:(BOOL)arg2 mergeCount:(long long)arg3;
+ (id)genAttributedContentWithReaderWrapNotifyMsg:(id)arg1;
+ (long long)mergeCountForMsg:(id)arg1;
+ (long long)genMergeCountWithReaderWrapNotifyMsg:(id)arg1;
+ (id)genTextContentWithContentItem:(id)arg1;
+ (id)genIconContentWithContentItem:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearAllData;
- (id)genBrandAttributedNotifyMsgBoxDigest:(id)arg1;
- (void)setLatestNotificationBoxDigestBold:(BOOL)arg1;
- (BOOL)isLatestNotificationBoxDigestBold;
- (BOOL)shouldShowPriorityNotificationMsgSwitch;
- (BOOL)updateNotificationMsgWrapExposeTime:(id)arg1 withStartTime:(unsigned long long)arg2 withDB:(id)arg3;
- (BOOL)checkIfNeedUpdateNotificationWithCurMainSessionMessageWrap:(id)arg1 withLatestMsgWrap:(id)arg2 shouldShowPriorityNotificationWithDB:(id)arg3;
- (id)getPriorityNotificationMsgWithCurMainSessionMessageWrap:(id)arg1 withLatestMsgWrap:(id)arg2 withUnreadCount:(unsigned int)arg3 withDB:(id)arg4 shouldUpdateShouldShowPriorityNotificationFlag:(BOOL *)arg5;
- (BOOL)updateNotificationMsgWrap:(id)arg1 isClickPriorityNotificationInTL:(BOOL)arg2 withDB:(id)arg3;
- (unsigned int)getClicfgValue:(id)arg1 withDef:(unsigned int)arg2;
- (BOOL)internalUpdateNotificationMsgWrap:(id)arg1 shouldShowPriorityNotification:(BOOL)arg2 withDB:(id)arg3;
- (id)notificationDigestMMKV;
- (void)setNotificationDigestMMKV:(id)arg1;
- (id)priorityItem;
- (void)setPriorityItem:(id)arg1;
- (void).cxx_destruct;
@end
