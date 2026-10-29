@interface _TtC6WeChat26FinderLiveStayTimeReporter : NSObject <MMFinderLiveStayBusinessExt>
{
     stayBusinessFlag; // +0x8
     redDotTipsID; // +0x10
     commentScene; // +0x20
     enterTimeStampMs; // +0x30
     exitTimeStampMs; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)OnLiveStayBusinessExit:(unsigned long long)arg1;
- (void)OnLiveStayBusinessEnter:(unsigned long long)arg1 commentScene:(id)arg2 reddotTipsID:(id)arg3;
- (void).cxx_destruct;
@end

