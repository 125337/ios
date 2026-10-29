@interface MMEmotionMsgBaseBrowseViewController : MMUIViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, SharePreConfirmViewDelegate, UIGestureRecognizerDelegate, IStoreEmotionDesignerInfoMgrExt, EmoticonDescMgrExt, MMImgageBrowseViewDelegate, EmoticonCustomAddLogicControllerDelegate, WebSearchMgrDelegate, EmoticonLensMgrExt, ILinkEventExt, EmoticonStoreLensDesignerViewDelegate, EmoticonMixedPreviewGridViewDelegate, WCActionSheetDelegate, EmoticonStoreItemExt>
{
    LinkReportData _linkReportData; // +0x68
    BOOL _isFullScreen; // +0x6a
    BOOL _onlyReqLinkInfo; // +0x6b
    BOOL _shouldUpdateDescAfterInteraction; // +0x6c
    long long _emotionScene; // +0x70
    EmoticonStoreItem * _item; // +0x78
    NSString * _sessionID; // +0x80
    EmotionActivity * _activityInfo; // +0x88
    MMUIButton * _emoticonLinkButton; // +0x90
    UIImageView * _arrowImageView; // +0x98
    RichTextView * _emoticonLinkTextView; // +0xa0
    EmoticonMixedPreviewGridView * _previewGridView; // +0xa8
    RelatedEmoticonActivityCell * _relatedEmoticonActivityCell; // +0xb0
    UIView * _containerView; // +0xb8
    MMUILabel * _descLabel; // +0xc0
    UIButton * _fromSourceButton; // +0xc8
    MMStoreEmoticonPreviewCell * _emotionCell; // +0xd0
    UIView * _lineView; // +0xd8
    EmotionStoreDetailDesignerContainerView * _designerContainerView; // +0xe0
    EmoticonStoreLensDesignerView * _lensDesignerView; // +0xe8
    EmoticonWeAppCellView * _weappView; // +0xf0
    CEmoticonWrap * _wrapEmoticon; // +0xf8
    MMUIActivityIndicatorView * _smallLoadingView; // +0x100
    MMImageBrowseView * _imageView; // +0x108
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x110
    EmotionLink * _linkInfo; // +0x118
    MMScrollActionSheet * _scrollActionSheet; // +0x120
}
- (void)openScrollableActionSheet;
- (void)configRowItems;
- (void)addActionSheetItem:(unsigned long long)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)handleClickActionSheetItemShareFriend:(id)arg1;
- (void)onSaveEmoticon;
- (void)onFollowEmoticonCamera;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)extraDataForExpose;
- (void)dealloc;
- (id)initWithEmoticonWrap:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillPresent:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)viewWillBeInteractivePoped;
- (id)activityAndLinkExtensionKey;
- (void)setFullScreen:(BOOL)arg1;
- (void)initRightBarButtonItem;
- (void)initImageViewWithFrame:(CGRect)arg1;
- (void)setupImageView;
- (void)initDesignerContainerView;
- (void)initLensDesignerView;
- (void)initRelatedEmoticonActivityCell;
- (void)updateRelatedEmoticonActivityCell;
- (void)setupStoreEmotionView;
- (void)setupEmotionCell;
- (id)getDesc;
- (void)updateEmoticonDescLabel;
- (void)initFromSourceButton;
- (void)initWeappButton;
- (void)onClickEmotionCell:(id)arg1;
- (void)reportBottomCellAction:(unsigned long long)arg1;
- (id)getReportFromUsr;
- (id)getChatName;
- (void)onOperate:(id)arg1;
- (void)reportEmoticonBrowsePageExposure;
- (void)initPreviewGridWithConfig:(id)arg1;
- (void)checkPreviewFor:(unsigned long long)arg1;
- (void)updateLayoutForPreview:(BOOL)arg1;
- (BOOL)isValidActivity;
- (BOOL)isRelatedEmoticonActivity;
- (BOOL)shouldShowRelatedEmoticonCell;
- (BOOL)isWeAppEmoji;
- (BOOL)isMixedEmoji;
- (BOOL)shouldGetDescFromMsgWrap;
- (BOOL)isCurrentActivityDegraded;
- (BOOL)isMixedEmojiDisabled;
- (void)onSwipeRightNavigationButton:(id)arg1;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (id)emoticonWrapForAdd;
- (id)msgWrapForOperation;
- (void)onClickEmojiDesignerButton;
- (void)openDesignerProfile:(BOOL)arg1;
- (void)onClickLensDesignerButton;
- (void)onTapRelatedEmoticonActivityCell:(id)arg1;
- (void)showDesignerProfile:(id)arg1 isFromPreview:(BOOL)arg2;
- (void)onTapWeAppCell;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)onGetDesignerPreviewForDesignerId:(id)arg1 andPreviewEmotions:(id)arg2 previewEmojis:(id)arg3;
- (void)onDesignerInfoUpdated:(id)arg1;
- (void)onGetEmotionActivityForActivityId:(id)arg1 md5:(id)arg2 linkId:(id)arg3 activity:(id)arg4 link:(id)arg5;
- (void)layoutActivity:(id)arg1;
- (void)layoutActivity:(id)arg1 waitAsync:(BOOL)arg2;
- (void)layoutWeappViewWithActivity:(id)arg1 link:(id)arg2;
- (void)layoutLink:(id)arg1;
- (void)onEmoticonLensRequestSuccess:(id)arg1 forLensId:(id)arg2;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (void)onGetEmoticonDescLink:(id)arg1 pid:(id)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onFollowEmoticonLensId:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onSingleTapImageBrowseView;
- (void)onImageBrowseViewDidZoom;
- (long long)emoticonScene;
- (void)onTapPreviewMore;
- (id)currentBrowseEmoticon;
- (id)getViewController;
- (id)emoticonLinkTextView;
- (id)arrowImageView;
- (id)emoticonLinkButton;
- (id)formatLinkInfo:(id)arg1;
- (BOOL)isFinderLink;
- (BOOL)isValidFinderLink:(id)arg1;
- (void)askForLinkInfo;
- (BOOL)isInChatroom;
- (void)onTouchEmotionLink:(id)arg1;
- (long long)emotionScene;
- (void)setEmotionScene:(long long)arg1;
- (BOOL)isFullScreen;
- (void)setIsFullScreen:(BOOL)arg1;
- (BOOL)onlyReqLinkInfo;
- (void)setOnlyReqLinkInfo:(BOOL)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (void)setEmoticonLinkButton:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setEmoticonLinkTextView:(id)arg1;
- (id)previewGridView;
- (void)setPreviewGridView:(id)arg1;
- (id)relatedEmoticonActivityCell;
- (void)setRelatedEmoticonActivityCell:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)fromSourceButton;
- (void)setFromSourceButton:(id)arg1;
- (id)emotionCell;
- (void)setEmotionCell:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)designerContainerView;
- (void)setDesignerContainerView:(id)arg1;
- (id)lensDesignerView;
- (void)setLensDesignerView:(id)arg1;
- (id)weappView;
- (void)setWeappView:(id)arg1;
- (BOOL)shouldUpdateDescAfterInteraction;
- (void)setShouldUpdateDescAfterInteraction:(BOOL)arg1;
- (id)wrapEmoticon;
- (void)setWrapEmoticon:(id)arg1;
- (id)smallLoadingView;
- (void)setSmallLoadingView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)emoticonAddLogicController;
- (void)setEmoticonAddLogicController:(id)arg1;
- (id)linkInfo;
- (void)setLinkInfo:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

