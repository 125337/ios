@interface BaseMessageViewModel : BaseChatViewModel <MsgImgFullScreenTransitionComponent, IMessageNodeStatusExt, IBaseMessageViewModel>
{
    CBaseContact * m_contact; // +0x28
    CMessageWrap * m_messageWrap; // +0x30
    CGSize m_contentViewSize; // +0x38
    NSString * m_cpKeyForChatRoomMessage; // +0x48
    NSString * m_cpKeyForChatRoomDisplayName; // +0x50
    BOOL m_isChatRoomMessageUnsafe; // +0x58
    BOOL m_isChatRoomDisplayNameUnsafe; // +0x59
    BOOL m_isSender; // +0x5a
    BOOL _isShowStatusView; // +0x5b
    BOOL _highlighted; // +0x5c
    NSString * _customHeadImageUrl; // +0x60
}
+ (void)registerMessageViewModelClass:(Class)arg1;
+ (void)initMessageViewModelClassListForIOS;
+ (void)initMessageViewModelClassListForVisionOS;
+ (void)initMessageViewModelClassList;
+ (id)createMessageViewModelWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (BOOL)canCreateMessageViewModelInBackgroundWithMessageWrap:(id)arg1;
+ (BOOL)canCreateViewModelInBackground;
+ (id)getChatRoomDisplayNameWithContact:(id)arg1 chatContact:(id)arg2;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)arg1;
- (BOOL)isComponentHidden;
- (void)setViewModelScene:(int)arg1;
- (int)viewModelScene;
- (void)setRecordNodeDataSource:(id)arg1;
- (id)recordNodeDataSource;
- (BOOL)isRecordDetail;
- (BOOL)isMsgRecordDetail;
- (BOOL)isFavRecordDetail;
- (BOOL)isShareConfirm;
- (unsigned int)msgStatus;
- (BOOL)canMeasureContentViewSizeInBackground;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)accessibilityDescription;
- (id)accessibilityValue;
- (id)additionalAccessibilityDescription;
- (id)additionalAccessibilityDescription2;
- (id)accessibilityMessageType;
- (BOOL)canShowMsgReplyMenuItem;
- (void)updateCrashProtectedState;
- (BOOL)isShowSendOKView;
- (void)updateContentViewHeight:(double)arg1;
- (int)revokeTimeLimitInSecond;
- (id)getRevokeMsgCustomizeActionSheet;
- (BOOL)isMsgCanBatchRevoke;
- (unsigned long long)batchRevokeMsgCount;
- (unsigned long long)batchRevokeScene;
- (void)resetLayoutCache;
- (CGSize)rowContentSize;
- (CGSize)measure:(CGSize)arg1;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)chatRoomDescName;
- (id)chatRoomDisplayName;
- (id)chatRoomTextStateIconDescription;
- (void)onMessageUpdateStatus;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (BOOL)isSender;
- (id)cpKeyForChatRoomMessage;
- (void)setCpKeyForChatRoomMessage:(id)arg1;
- (id)cpKeyForChatRoomDisplayName;
- (void)setCpKeyForChatRoomDisplayName:(id)arg1;
- (BOOL)isChatRoomMessageUnsafe;
- (void)setIsChatRoomMessageUnsafe:(BOOL)arg1;
- (BOOL)isChatRoomDisplayNameUnsafe;
- (void)setIsChatRoomDisplayNameUnsafe:(BOOL)arg1;
- (CGSize)contentViewSize;
- (id)customHeadImageUrl;
- (void)setCustomHeadImageUrl:(id)arg1;
- (BOOL)isShowStatusView;
- (void)setIsShowStatusView:(BOOL)arg1;
- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void).cxx_destruct;
@end
