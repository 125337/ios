@interface POITableViewCell : MMTableViewCell <POITapGestureRecognizerDelegate, UIGestureRecognizerDelegate>
{
    id <POITableViewCellDelegate> _actionDelegate; // +0x8
    UITableView * _myTableView; // +0x10
    NSIndexPath * _myIndexPath; // +0x18
    UIView * _mySelectedBackgroundView; // +0x20
    UIButton * _selectedButt; // +0x28
    POITapGestureRecognizer * _recognizer; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)handleTableViewCellTapGesture:(id)arg1;
- (void)setMySelectedBackgroundViewDisplay;
- (void)didTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)myTableView;
- (void)setMyTableView:(id)arg1;
- (id)myIndexPath;
- (void)setMyIndexPath:(id)arg1;
- (id)mySelectedBackgroundView;
- (void)setMySelectedBackgroundView:(id)arg1;
- (id)selectedButt;
- (void)setSelectedButt:(id)arg1;
- (id)recognizer;
- (void)setRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

