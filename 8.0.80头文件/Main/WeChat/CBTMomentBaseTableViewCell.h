@interface CBTMomentBaseTableViewCell : UITableViewCell
{
    CBTMomentBaseCellModel * _baseModel; // +0x8
}
+ (id)cellReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)makeCellWithModel:(id)arg1 cellWidth:(double)arg2 indexPath:(id)arg3;
- (id)baseModel;
- (void)setBaseModel:(id)arg1;
- (void).cxx_destruct;
@end
