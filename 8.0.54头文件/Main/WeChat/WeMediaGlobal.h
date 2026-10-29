@interface WeMediaGlobal : NSObject
{
    int weloglvl; // +0x8
    id <WeMediaDelegate> _delegate; // +0x10
}
+ (id)shareInstance;
- (id)init;
- (void)setLoglvl:(int)arg1;
- (int)getLoglvl;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

