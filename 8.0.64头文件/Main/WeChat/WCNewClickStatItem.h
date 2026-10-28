@interface WCNewClickStatItem : MMObject
{
    unsigned int dataType; // +0x8
    unsigned int errType; // +0xc
    unsigned int enterTime; // +0x10
    unsigned int scene; // +0x14
    unsigned int quitTime; // +0x18
    int interval; // +0x1c
    unsigned int lastQuitTime; // +0x20
    int backGroundInterval; // +0x24
    int lastInterval; // +0x28
    unsigned int seq; // +0x2c
    int sumInterval; // +0x30
    unsigned int outOfOrderCount; // +0x34
    unsigned int pageCount; // +0x38
    unsigned int realSwitchCount; // +0x3c
    unsigned int lastSwitchForeTime; // +0x40
    unsigned int lastSwitchBackTime; // +0x44
    int realInterval; // +0x48
    int realBackGroundInterval; // +0x4c
    unsigned int realLastQuitTS; // +0x50
    unsigned int realFirstEnterTS; // +0x54
    NSString * pageFlow; // +0x58
    NSMutableArray * pageList; // +0x60
    NSArray * _pageFormatList; // +0x68
}
- (void)calAndFixData;
- (id)toString;
- (id)description;
- (void)calData;
- (int)calSumInterval;
- (id)formatOriginalPageFlow;
- (id)formatPageList;
- (void)checkData;
- (void)checkIsOK;
- (void)checkOutOfOrder;
- (void)checkMisMatchUI;
- (void)fixPageFlow;
- (unsigned int)dataType;
- (void)setDataType:(unsigned int)arg1;
- (unsigned int)errType;
- (void)setErrType:(unsigned int)arg1;
- (unsigned int)enterTime;
- (void)setEnterTime:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)quitTime;
- (void)setQuitTime:(unsigned int)arg1;
- (int)interval;
- (void)setInterval:(int)arg1;
- (unsigned int)lastQuitTime;
- (void)setLastQuitTime:(unsigned int)arg1;
- (int)backGroundInterval;
- (void)setBackGroundInterval:(int)arg1;
- (int)lastInterval;
- (void)setLastInterval:(int)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (int)sumInterval;
- (void)setSumInterval:(int)arg1;
- (unsigned int)outOfOrderCount;
- (void)setOutOfOrderCount:(unsigned int)arg1;
- (unsigned int)pageCount;
- (void)setPageCount:(unsigned int)arg1;
- (id)pageFlow;
- (void)setPageFlow:(id)arg1;
- (id)pageList;
- (void)setPageList:(id)arg1;
- (unsigned int)realSwitchCount;
- (void)setRealSwitchCount:(unsigned int)arg1;
- (unsigned int)lastSwitchForeTime;
- (void)setLastSwitchForeTime:(unsigned int)arg1;
- (unsigned int)lastSwitchBackTime;
- (void)setLastSwitchBackTime:(unsigned int)arg1;
- (int)realInterval;
- (void)setRealInterval:(int)arg1;
- (int)realBackGroundInterval;
- (void)setRealBackGroundInterval:(int)arg1;
- (unsigned int)realLastQuitTS;
- (void)setRealLastQuitTS:(unsigned int)arg1;
- (unsigned int)realFirstEnterTS;
- (void)setRealFirstEnterTS:(unsigned int)arg1;
- (id)pageFormatList;
- (void)setPageFormatList:(id)arg1;
- (void).cxx_destruct;
@end
