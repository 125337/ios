@interface TuringPostRule_YOUTU108138v208018 : NSObject
{
    BOOL _usesDebugServer; // +0x8
    BOOL _shouldAutoPost; // +0x9
    unsigned long long _protocol; // +0x10
}
+ (id)postRule;
+ (unsigned long long)defaultProtocol;
+ (void)setDefaultProtocol:(unsigned long long)arg1;
+ (BOOL)usesDebugServerAsDefault;
+ (void)setUsesDebugServerAsDefault:(BOOL)arg1;
+ (const turing_qf_fXctbkcbkT_lrYb *)defaultNetwork;
- (id)initForAutoPosting:(BOOL)arg1;
- (void)setProtocol:(unsigned long long)arg1;
- (unsigned long long)protocol;
- (const turing_qf_fXctbkcbkT_lrYb *)network;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)usesDebugServer;
- (void)setUsesDebugServer:(BOOL)arg1;
- (BOOL)shouldAutoPost;
- (void)setShouldAutoPost:(BOOL)arg1;
@end
