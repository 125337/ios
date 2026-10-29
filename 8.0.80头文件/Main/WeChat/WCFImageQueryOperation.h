@interface WCFImageQueryOperation : NSObject <WCFImageOperation>
{
    BOOL _cancelled; // +0x8
}
- (void)cancel;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
@end
