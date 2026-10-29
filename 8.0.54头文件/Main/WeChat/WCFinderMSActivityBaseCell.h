@interface WCFinderMSActivityBaseCell : UITableViewCell <WCFinderMemeberShipExt, WCFinderMSActivityCellProtocol>
{
    BOOL _isAuthorScene; // +0x8
    BOOL _showSeparatorLine; // +0x9
    WCFinderFeedContentVM * _contentVM; // +0x10
    WCFinderEventDelegate * _delegate; // +0x18
    WCFinderReuseQueue * _reuseQueue; // +0x20
    WCFinderMSActivityCellUIModel * _uiModel; // +0x28
    NSString * _finderUsername; // +0x30
    NSString * _cellIdentifier; // +0x38
}
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
+ (void)prepareForReuseQueue:(id)arg1;
+ (id)cellIdentifier;
+ (id)genDescTextViewConfigWithMaxDisplayLine:(unsigned long long)arg1 content:(id)arg2 forVM:(id)arg3;
+ (id)genCommentTextViewConfigWithMaxDisplayLine:(unsigned long long)arg1 content:(id)arg2 isExpand:(BOOL)arg3 forVM:(id)arg4;
+ (id)genLikeListTextViewConfigWithMaxDisplayLine:(unsigned long long)arg1 content:(id)arg2 forVM:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)handleHighLightBG:(id)arg1;
- (void)showHighLightBG;
- (void)setViewModel:(id)arg1 delegate:(id)arg2 isAuthorScene:(BOOL)arg3 finderUsername:(id)arg4 showSeparatorLine:(BOOL)arg5 cellIdentifier:(id)arg6;
- (void)onContentVMChanged;
- (void)onCellDidEndDisplay;
- (void)reloadCellSize;
- (void)onLongPress:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reuseQueue;
- (void)setReuseQueue:(id)arg1;
- (id)uiModel;
- (void)setUiModel:(id)arg1;
- (BOOL)isAuthorScene;
- (void)setIsAuthorScene:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (BOOL)showSeparatorLine;
- (void)setShowSeparatorLine:(BOOL)arg1;
- (id)cellIdentifier;
- (void)setCellIdentifier:(id)arg1;
- (void).cxx_destruct;
@end

