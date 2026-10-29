@interface MMAssetCell : UITableViewCell
{
    BOOL _bPickerStyleForFile; // +0x8
    BOOL _showAddButton; // +0x9
    BOOL _showCameraButton; // +0xa
    id <MMAssetCellDelegate> _delegate; // +0x10
    NSMutableArray * _rowAssets; // +0x18
    UIButton * _addButton; // +0x20
    UIButton * _cameraButton; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setRowAssets:(id)arg1;
- (id)assetDate;
- (void)doFadeInAnimationWithOrder:(long long)arg1;
- (void)setShowAddButton:(BOOL)arg1 size:(CGSize)arg2;
- (void)checkInitAddButton;
- (void)onAddButtonClick:(id)arg1;
- (void)setShowCameraButton:(BOOL)arg1 size:(CGSize)arg2;
- (void)checkInitCameraButton;
- (void)onCameraButtonClick:(id)arg1;
- (void)enableCameraButton:(BOOL)arg1;
- (BOOL)isCameraButtonEnable;
- (id)lastVisibleAssetView;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rowAssets;
- (BOOL)bPickerStyleForFile;
- (void)setBPickerStyleForFile:(BOOL)arg1;
- (BOOL)showAddButton;
- (void)setShowAddButton:(BOOL)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (BOOL)showCameraButton;
- (void)setShowCameraButton:(BOOL)arg1;
- (id)cameraButton;
- (void)setCameraButton:(id)arg1;
- (void).cxx_destruct;
@end
