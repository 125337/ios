@interface CaraAppleUserContext : NSObject <CaraUserContextBase>
{
    MMContext * _context; // +0x8
}
- (id)init;
- (void)push;
- (void)pop;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end

