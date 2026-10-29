@interface StorageFootPanelView : UIView
{
    BOOL _bShowHardLinkTip; // +0x8
    id <StorageFootPanelViewDelegate> _delegate; // +0x10
    UIButton * _selectAllButton; // +0x18
    UIButton * _deleteButton; // +0x20
    UILabel * _sizeLabel; // +0x28
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0x30
    MMUIButton * _hardlinkInfo; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateView;
- (void)onClickShowInfo;
- (void)onFootPanelSelectButtonClick;
- (void)onFootPanelDeleteButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bShowHardLinkTip;
- (void)setBShowHardLinkTip:(BOOL)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)hardlinkInfo;
- (void)setHardlinkInfo:(id)arg1;
- (void).cxx_destruct;
@end

