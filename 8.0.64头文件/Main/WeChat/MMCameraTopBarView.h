@interface MMCameraTopBarView : UIView
{
    NSMutableArray * _btnArray; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addBtn:(id)arg1;
- (void)removeBtn:(id)arg1;
- (void)layoutButtonElem;
- (id)btnArray;
- (void)setBtnArray:(id)arg1;
- (void).cxx_destruct;
@end
