@interface ExptLogic : MMObject <PBMessageObserverDelegate>
{
    BOOL _isReqNow; // +0x8
    unsigned int _lastUpdateTime; // +0xc
    unsigned int _interval; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)checkToGetSvrExpt;
- (void)getSvrExpt:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)OnReceNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)resetGetXExptTime:(unsigned int)arg1;
- (void)noteGetExptTime:(unsigned int)arg1;
- (void)writeGetExptTime:(unsigned int)arg1;
- (unsigned int)getLastGetExptTime;
- (void)noteGetExptIntervalSec:(unsigned int)arg1;
- (unsigned int)getExptInterval;
- (unsigned int)getTimeFromFile:(id)arg1;
- (BOOL)saveTimeToFile:(unsigned int)arg1 fileName:(id)arg2;
- (id)mmExptPath:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (unsigned int)interval;
- (void)setInterval:(unsigned int)arg1;
- (BOOL)isReqNow;
- (void)setIsReqNow:(BOOL)arg1;
@end
