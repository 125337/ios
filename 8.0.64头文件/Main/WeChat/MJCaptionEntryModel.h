@interface MJCaptionEntryModel : NSObject <PBCoding>
{
    NSString * _launguage; // +0x8
    NSArray * _captionItems; // +0x10
}
+ (void)PBArrayAdd_launguage;
+ (void)PBArrayAdd_captionItems;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCaptionEntry:(id)arg1;
- (id)toCaptionEntry;
- (id)description;
- (id)launguage;
- (void)setLaunguage:(id)arg1;
- (id)captionItems;
- (void)setCaptionItems:(id)arg1;
- (void).cxx_destruct;
@end
