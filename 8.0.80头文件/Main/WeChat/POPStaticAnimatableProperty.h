@interface POPStaticAnimatableProperty : POPAnimatableProperty
{
    struct * _state; // +0x8
}
- (id)name;
- (id /* block */)readBlock;
- (id /* block */)writeBlock;
- (double)threshold;
@end
