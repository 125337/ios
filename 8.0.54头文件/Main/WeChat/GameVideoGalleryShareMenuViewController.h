@interface GameVideoGalleryShareMenuViewController : GameVideoBottomTipsViewController
{
    id /* block */ _clickItemBlock; // +0x70
}
- (id)initWithClickItemBlock:(id /* block */)arg1;
- (void)setupContentView:(id)arg1;
- (void)addTitleView:(id)arg1;
- (void)addItemView:(id)arg1 index:(int)arg2 svgName:(id)arg3 title:(id)arg4 subtitle:(id)arg5;
- (void)clickItem:(id)arg1;
- (double)contentHeight;
- (BOOL)dismissWhenTapOutside;
- (BOOL)hideOkButton;
- (void).cxx_destruct;
@end

