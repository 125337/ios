@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty
{
    NSString * name; // +0x8
    id /* block */ readBlock; // +0x10
    id /* block */ writeBlock; // +0x18
    double threshold; // +0x20
}
- (id)name;
- (id /* block */)readBlock;
- (id /* block */)writeBlock;
- (double)threshold;
- (void).cxx_destruct;
@end
