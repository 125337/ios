@interface MMFinderLiveModNoticeView : MMFinderLiveCancelNoticeView
{
    unsigned int _remainModifyQuota; // +0x68
    id /* block */ _liveModNoticeViewBlock; // +0x70
}
- (void)layoutUI;
- (void)liveCancelNoticeViewClick:(BOOL)arg1;
- (id /* block */)liveModNoticeViewBlock;
- (void)setLiveModNoticeViewBlock:(id /* block */)arg1;
- (unsigned int)remainModifyQuota;
- (void)setRemainModifyQuota:(unsigned int)arg1;
- (void).cxx_destruct;
@end
