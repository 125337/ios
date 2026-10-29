@interface MMFinderLiveHonCoverPromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    BOOL _received; // +0x8
    BOOL _isAnchor; // +0x9
    MMWebImageView * _titleImgView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _anchorLabel; // +0x20
    MMUIButton * _actionButton; // +0x28
    FinderLivePromoteInfoRedPacketCover_PromoteRedPacketCoverInfo * _model; // +0x30
}
+ (BOOL)isCanShowHonCover:(id)arg1 liveTask:(id)arg2;
+ (id)getNewCoverInfoWithBuffer:(id)arg1;
+ (id)getCacheInfoWithList:(id)arg1 model:(id)arg2 liveTask:(id)arg3;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCoverInfoWithBuffer:(id)arg1;
- (id)getRedPacketWithModel:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)layoutUI;
- (void)layoutActionBtn;
- (id)getCacheLiveHonCoverList;
- (void)cacheLiveHonCoverInfo:(id)arg1;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutAnchorLabel;
- (void)updateLabelsOriginY;
- (void)actionButtonClick:(id)arg1;
- (void)onTapAction;
- (void)addGestures;
- (void)handleSingleTapGesture:(id)arg1;
- (void)closeWebviewClick;
- (void)updateRespList:(id)arg1;
- (void)updateActionButton:(BOOL)arg1 full:(unsigned int)arg2;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)anchorLabel;
- (void)setAnchorLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (BOOL)received;
- (void)setReceived:(BOOL)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (void).cxx_destruct;
@end
