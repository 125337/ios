@interface WCCardTipController : MMObject
{
    WCCardTipItem * _wcCardTip; // +0x8
}
- (id)init;
- (void)loadTipStg;
- (void)setWCCardTip:(id)arg1;
- (void)clearWCCardTip;
- (id)getCardTip;
- (id)GetPathOfWCCardTipStorage;
- (void)saveWCCardTipStg;
- (void).cxx_destruct;
@end
