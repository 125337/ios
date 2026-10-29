@interface WXGRoamBackupPackageListCell : UITableViewCell <IRoamBackupPackageServiceExt>
{
    BOOL _bLastActivity; // +0x8
    BOOL _bTopLastActivity; // +0x9
    BOOL _isShowDetail; // +0xa
    BOOL _isDeleted; // +0xb
    float _backupProgress; // +0xc
    UIView * _blockView; // +0x10
    UIView * _topView; // +0x18
    UIView * _bottomView; // +0x20
    UIView * _mainView; // +0x28
    UIView * _seperator; // +0x30
    WXGRoamBackupPackageDetailCell * _managerCell; // +0x38
    WXGRoamBackupPackageDetailCell * _autoCell; // +0x40
    WXGRoamBackupPackageDetailCell * _restoreCell; // +0x48
    UIView * _mainIconBackgroundView; // +0x50
    UIImageView * _mainIconView; // +0x58
    UILabel * _mainTitleLabel; // +0x60
    UILabel * _mainSubTitleLabel; // +0x68
    UIButton * _mainBtn; // +0x70
    UIButton * _mainSubBtn; // +0x78
    MMProgressView * _progressView; // +0x80
    UILabel * _progressLabel; // +0x88
    MMUIActivityIndicatorView * _indicatorView; // +0x90
    UIImageView * _iconView; // +0x98
    UIImageView * _autoArrowImg; // +0xa0
    UILabel * _titleLabel; // +0xa8
    UILabel * _subTitleLabel; // +0xb0
    UILabel * _leftLabel; // +0xb8
    UIButton * _detailBtn; // +0xc0
    UIView * _labelIconView; // +0xc8
    UIButton * _rightBtn; // +0xd0
    double _cellHeight; // +0xd8
    double _cellWidth; // +0xe0
    id /* block */ _reloadBlock; // +0xe8
    id /* block */ _updateHeightBlock; // +0xf0
    unsigned long long _cellIndex; // +0xf8
    AffRoamTransferStats * _curStat; // +0x100
    NSString * _speedString; // +0x108
    NSString * _leftTimeString; // +0x110
    unsigned long long _curSpeed; // +0x118
    unsigned long long _costTime; // +0x120
    unsigned long long _speedCount; // +0x128
    unsigned long long _selectedSize; // +0x130
    unsigned long long _transferSize; // +0x138
    SightIconView * _sightIconView; // +0x140
    _NSRange _linkRange; // +0x148
}
- (id)init;
- (void)willEndDisplay;
- (void)setCellWidth:(double)arg1;
- (void)setupTopView;
- (void)setupBottomView;
- (void)updateBottomViewEnable;
- (void)updateTopSubView;
- (void)addIconImageView;
- (void)addTipsLabel;
- (void)addSmallTipsLabel;
- (void)addGreenButton;
- (void)addGreyButton;
- (void)addProgressView;
- (void)updateView;
- (void)onGetTransferStat;
- (void)analysisStat:(id)arg1;
- (BOOL)isNeedToShowToast:(BOOL)arg1;
- (unsigned long long)getCharacterIndex:(id)arg1;
- (void)onTapChangeBackupRange:(id)arg1;
- (void)onTapLearnDetail:(id)arg1;
- (void)onTapChangeConnection:(id)arg1;
- (void)onTapDelete;
- (void)onTapAuto;
- (void)onTapRestore;
- (void)onTapManager;
- (void)onTapBackup;
- (void)onStartRestore;
- (void)onTapPause;
- (void)onTapResume;
- (void)onTapStop;
- (void)onTapCancel;
- (void)onTapDetail;
- (void)onCancelUsingState;
- (void)onNotiryToNormal;
- (void)onIgnoreAutoBackupFail;
- (void)onCancelPrepare;
- (void)pauseAutoBackup24h;
- (void)onPressEndBtn;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(BOOL)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1 models:(id)arg2;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)arg1 packageID:(unsigned long long)arg2;
- (id)blockView;
- (void)setBlockView:(id)arg1;
- (id)topView;
- (void)setTopView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (id)managerCell;
- (void)setManagerCell:(id)arg1;
- (id)autoCell;
- (void)setAutoCell:(id)arg1;
- (id)restoreCell;
- (void)setRestoreCell:(id)arg1;
- (id)mainIconBackgroundView;
- (void)setMainIconBackgroundView:(id)arg1;
- (id)mainIconView;
- (void)setMainIconView:(id)arg1;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg1;
- (id)mainSubTitleLabel;
- (void)setMainSubTitleLabel:(id)arg1;
- (id)mainBtn;
- (void)setMainBtn:(id)arg1;
- (id)mainSubBtn;
- (void)setMainSubBtn:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (BOOL)bLastActivity;
- (void)setBLastActivity:(BOOL)arg1;
- (BOOL)bTopLastActivity;
- (void)setBTopLastActivity:(BOOL)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)autoArrowImg;
- (void)setAutoArrowImg:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)leftLabel;
- (void)setLeftLabel:(id)arg1;
- (id)detailBtn;
- (void)setDetailBtn:(id)arg1;
- (id)labelIconView;
- (void)setLabelIconView:(id)arg1;
- (id)rightBtn;
- (void)setRightBtn:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)cellWidth;
- (BOOL)isShowDetail;
- (void)setIsShowDetail:(BOOL)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (id /* block */)reloadBlock;
- (void)setReloadBlock:(id /* block */)arg1;
- (id /* block */)updateHeightBlock;
- (void)setUpdateHeightBlock:(id /* block */)arg1;
- (unsigned long long)cellIndex;
- (void)setCellIndex:(unsigned long long)arg1;
- (id)curStat;
- (void)setCurStat:(id)arg1;
- (id)speedString;
- (void)setSpeedString:(id)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (float)backupProgress;
- (void)setBackupProgress:(float)arg1;
- (unsigned long long)curSpeed;
- (void)setCurSpeed:(unsigned long long)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
- (unsigned long long)speedCount;
- (void)setSpeedCount:(unsigned long long)arg1;
- (unsigned long long)selectedSize;
- (void)setSelectedSize:(unsigned long long)arg1;
- (unsigned long long)transferSize;
- (void)setTransferSize:(unsigned long long)arg1;
- (_NSRange)linkRange;
- (void)setLinkRange:(_NSRange)arg1;
- (id)sightIconView;
- (void)setSightIconView:(id)arg1;
- (void).cxx_destruct;
@end
