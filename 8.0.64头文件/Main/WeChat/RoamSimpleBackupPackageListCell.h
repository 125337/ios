@interface RoamSimpleBackupPackageListCell : UITableViewCell <IRoamBackupPackageServiceExt>
{
    BOOL _isShowDetail; // +0x8
    BOOL _isDeleted; // +0x9
    BOOL _bTopLastActivity; // +0xa
    double _cellHeight; // +0x10
    UIView * _uiContainerView; // +0x18
    UIImageView * _uiIconView; // +0x20
    UILabel * _uiTitleLabel; // +0x28
    UIView * _labelIconView; // +0x30
    UILabel * _uiSubTitleLabel; // +0x38
    WXGRoamBannerView * _uiBannerView; // +0x40
    UIImageView * _uiRightArrowImg; // +0x48
    double _cellWidth; // +0x50
    unsigned long long _cellIndex; // +0x58
    unsigned long long _totalCellCount; // +0x60
}
- (void)dealloc;
- (void)prepareForReuse;
- (void)viewDidPop;
- (void)didEndDisplayingCell;
- (void)setupWithWidth:(double)arg1 index:(long long)arg2 totalCount:(long long)arg3 isShowDetail:(BOOL)arg4;
- (void)setupViews;
- (void)updateSubTitleView;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(BOOL)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)setUiLabelAutoNewLine:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)uiContainerView;
- (void)setUiContainerView:(id)arg1;
- (id)uiIconView;
- (void)setUiIconView:(id)arg1;
- (id)uiTitleLabel;
- (void)setUiTitleLabel:(id)arg1;
- (id)labelIconView;
- (void)setLabelIconView:(id)arg1;
- (id)uiSubTitleLabel;
- (void)setUiSubTitleLabel:(id)arg1;
- (id)uiBannerView;
- (void)setUiBannerView:(id)arg1;
- (id)uiRightArrowImg;
- (void)setUiRightArrowImg:(id)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (BOOL)isShowDetail;
- (void)setIsShowDetail:(BOOL)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (unsigned long long)cellIndex;
- (void)setCellIndex:(unsigned long long)arg1;
- (unsigned long long)totalCellCount;
- (void)setTotalCellCount:(unsigned long long)arg1;
- (BOOL)bTopLastActivity;
- (void)setBTopLastActivity:(BOOL)arg1;
- (void).cxx_destruct;
@end
