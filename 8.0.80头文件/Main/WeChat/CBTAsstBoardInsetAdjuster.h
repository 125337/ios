@interface CBTAsstBoardInsetAdjuster : NSObject
{
    UITableView * _tableView; // +0x8
    double _baselineBottom; // +0x10
    NSMutableDictionary * _ledger; // +0x18
    double _lastWrittenBottom; // +0x20
}
- (id)initWithTableView:(id)arg1;
- (void)setBaselineBottom:(double)arg1;
- (double)contributionForKey:(id)arg1;
- (double)totalContribution;
- (void)setContribution:(double)arg1 forKey:(id)arg2 reason:(id)arg3;
- (void)adjustContribution:(double)arg1 forKey:(id)arg2 reason:(id)arg3;
- (void)clearContributionForKey:(id)arg1 reason:(id)arg2;
- (void)reassertContentInset;
- (void)applyToTableViewWithChange:(id)arg1 key:(id)arg2 oldValue:(double)arg3 newValue:(double)arg4 reason:(id)arg5;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (double)baselineBottom;
- (id)ledger;
- (void)setLedger:(id)arg1;
- (double)lastWrittenBottom;
- (void)setLastWrittenBottom:(double)arg1;
- (void).cxx_destruct;
@end
