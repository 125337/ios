@interface WCFinderNativeDramaHalfScreenHeaderConfiguration : NSObject <UIContentConfiguration>
{
    NSURL * _coverURL; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
}
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)coverURL;
- (void)setCoverURL:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
