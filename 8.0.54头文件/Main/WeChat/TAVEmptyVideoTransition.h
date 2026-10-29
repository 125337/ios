@interface TAVEmptyVideoTransition : NSObject <TAVVideoTransition>
{
    NSString * _identifier; // +0x8
    struct _duration; // +0x10
}
- (id)init;
- (id)initWithDuration:(struct)arg1;
- (id)renderImageWithForegroundImage:(id)arg1 backgroundImage:(id)arg2 renderInfo:(id)arg3;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (struct)duration;
- (void)setDuration:(struct)arg1;
- (void).cxx_destruct;
@end

