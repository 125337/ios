@interface EmoticonHalfScreenSendView : MMPageSheetBaseView <IStoreEmotionSingleDownloadMgrExt, EmoticonCustomManageAddLogicDelegate, MMUIViewControllerDelegate, EmoticonStoreItemExt, IStoreEmotionDesignerInfoMgrExt, ILinkEventExt, ForwardMessageLogicDelegate>
{
    BOOL _shouldShowEntry; // +0x8
    BOOL _isSendPrimary; // +0x9
    BOOL _didInitDetailView; // +0xa
    BOOL _needReportEntryExpose; // +0xb
    id <EmoticonHalfScreenSendViewDelegate> _delegate; // +0x10
    EmojiInfoObj * _emojiInfoObj; // +0x18
    UIButton * _sendBtn; // +0x20
    UIButton * _addBtn; // +0x28
    UIImageView * _emojiView; // +0x30
    UILabel * _emojiDescLabel; // +0x38
    UILabel * _emojiOriginalLabel; // +0x40
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x48
    RichTextView * _entryView; // +0x50
    EmoticonStoreItem * _entryItem; // +0x58
    PersonalDesigner * _entryDesigner; // +0x60
    EmoticonCustomManageAddLogic * _emoticonAddLogic; // +0x68
    ForwardMessageLogicController * _forwardLogicController; // +0x70
    EmoticonHalfScreenSendViewReportInfo * _reportInfo; // +0x78
}
- (id)initWithEmojiInfoObj:(id)arg1 reportInfo:(id)arg2;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)getScaledEmojiSize;
- (void)createOrUpadreLayout;
- (void)configPageSheet;
- (void)tryInitDetailView;
- (void)initDetailView;
- (void)checkEntry;
- (double)calDetailViewHeight;
- (void)genButtons:(BOOL)arg1;
- (void)configIndicator;
- (void)initCustomEntry;
- (void)startDownloadEmoji;
- (void)onTapSend;
- (void)onTapAdd;
- (void)onTapCustomEntry;
- (void)onLongPressed:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)oWrapFromEmojiInfo:(id)arg1;
- (id)emoticonAddLogic;
- (id)forwardLogicController;
- (id)entryContentWithName:(id)arg1 imgUrl:(id)arg2 isRound:(BOOL)arg3;
- (id)appendChanelIconFor:(id)arg1;
- (id)getViewController;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(BOOL)arg2;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (id)getCurrentViewController;
- (BOOL)shouldShowSendSuccessView:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)reportAction:(unsigned long long)arg1;
- (id)sdkReportParams;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowEntry;
- (void)setShouldShowEntry:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)sendBtn;
- (void)setSendBtn:(id)arg1;
- (id)addBtn;
- (void)setAddBtn:(id)arg1;
- (BOOL)isSendPrimary;
- (void)setIsSendPrimary:(BOOL)arg1;
- (id)emojiView;
- (void)setEmojiView:(id)arg1;
- (id)emojiDescLabel;
- (void)setEmojiDescLabel:(id)arg1;
- (id)emojiOriginalLabel;
- (void)setEmojiOriginalLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (BOOL)didInitDetailView;
- (void)setDidInitDetailView:(BOOL)arg1;
- (id)entryView;
- (void)setEntryView:(id)arg1;
- (id)entryItem;
- (void)setEntryItem:(id)arg1;
- (id)entryDesigner;
- (void)setEntryDesigner:(id)arg1;
- (void)setEmoticonAddLogic:(id)arg1;
- (void)setForwardLogicController:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (BOOL)needReportEntryExpose;
- (void)setNeedReportEntryExpose:(BOOL)arg1;
- (void).cxx_destruct;
@end
