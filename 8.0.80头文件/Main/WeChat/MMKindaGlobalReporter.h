@interface MMKindaGlobalReporter : NSObject
{
    Handle<std::shared_ptr<kinda::KindaGlobalReporter>> _cppRefHandle; // +0x8
}
+ (id)createReporter;
- (id)initWithCpp:(const void *)arg1;
- (void)log:(id)arg1;
- (id)getCppSessionId;
- (int)getKindaSequenceId;
- (void)setKindaSequenceId:(long long)arg1;
- (void)listenSessionId:(id)arg1;
- (void)unlistenSessionId:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
