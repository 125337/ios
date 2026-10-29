@interface MMFinderLiveMusicSettingOperationBar : UIView
{
    BOOL _isVolumeSelected; // +0x8
    id /* block */ _tapCallback; // +0x10
    NSArray * _actionList; // +0x18
    UIImageView * _editingIconImg; // +0x20
    UIImageView * _volumnIconImg; // +0x28
    UIView * _volumnIconView; // +0x30
    UIImageView * _addMusicIconImg; // +0x38
}
+ (double)preferWidth;
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 actionList:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutVolumnIconImg;
- (void)layoutVolumnIconView;
- (void)layoutEditingIconImg;
- (void)layoutAddMusicIconImg;
- (void)onEditIconTapGesture:(id)arg1;
- (void)onVolumnTapGesture:(id)arg1;
- (void)onAddMusicTapGesture:(id)arg1;
- (void)setIsVolumeSelected:(BOOL)arg1;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (BOOL)isVolumeSelected;
- (id)actionList;
- (void)setActionList:(id)arg1;
- (id)editingIconImg;
- (void)setEditingIconImg:(id)arg1;
- (id)volumnIconImg;
- (void)setVolumnIconImg:(id)arg1;
- (id)volumnIconView;
- (void)setVolumnIconView:(id)arg1;
- (id)addMusicIconImg;
- (void)setAddMusicIconImg:(id)arg1;
- (void).cxx_destruct;
@end

