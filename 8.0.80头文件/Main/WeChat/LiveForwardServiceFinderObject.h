@interface LiveForwardServiceFinderObject : NSObject
{
    FlutterStandardTypedData * _buff; // +0x8
    NSNumber * _ignoreOneTimeFlag; // +0x10
    NSString * _lastGMsgID; // +0x18
}
+ (id)makeWithBuff:(id)arg1 ignoreOneTimeFlag:(id)arg2 lastGMsgID:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)buff;
- (void)setBuff:(id)arg1;
- (id)ignoreOneTimeFlag;
- (void)setIgnoreOneTimeFlag:(id)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (void).cxx_destruct;
@end
