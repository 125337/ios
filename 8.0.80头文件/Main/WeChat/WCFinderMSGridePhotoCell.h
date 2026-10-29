@interface WCFinderMSGridePhotoCell : WCFinderMSActivityBaseCell
{
    NSMutableArray * _photoCells; // +0x8
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
+ (void)prepareForReuseQueue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)prepareForReusePhotoViews;
- (void)onContentVMChanged;
- (void)onClickPhoto:(id)arg1;
- (void)onLongPress:(id)arg1;
- (id)photoCells;
- (void)setPhotoCells:(id)arg1;
- (void).cxx_destruct;
@end
