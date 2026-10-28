@interface PerformSelectorArgv : NSObject
{
    SEL m_selector; // +0x8
    id m_argument; // +0x10
    MMContext * m_context; // +0x18
}
- (id)initWithSelector:(SEL)arg1 argument:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void).cxx_destruct;
@end
