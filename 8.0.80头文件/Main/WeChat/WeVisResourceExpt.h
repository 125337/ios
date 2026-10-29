@interface WeVisResourceExpt : NSObject
{
    BOOL _face2dEnabled; // +0x8
}
+ (id)current;
+ (void)setup;
+ (id)debugDescription;
- (id)init;
- (BOOL)face2dEnabled;
- (void)setFace2dEnabled:(BOOL)arg1;
@end
