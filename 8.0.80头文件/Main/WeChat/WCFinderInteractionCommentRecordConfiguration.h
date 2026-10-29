@interface WCFinderInteractionCommentRecordConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem, WCFinderCollectionViewReportableItem>
{
    unsigned long long _identifier; // +0x8
    NSString * _date; // +0x10
    NSString * _comment; // +0x18
    NSString * _quoteContent; // +0x20
    NSURL * _thumbURL; // +0x28
    NSString * _viewID; // +0x30
    unsigned long long _reportPolicy; // +0x38
    NSDictionary * _params; // +0x40
    WCFinderMention * _mention; // +0x48
    double _containerWidth; // +0x50
    NSNumber * _height; // +0x58
}
- (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)quoteContent;
- (void)setQuoteContent:(id)arg1;
- (id)thumbURL;
- (void)setThumbURL:(id)arg1;
- (id)viewID;
- (void)setViewID:(id)arg1;
- (unsigned long long)reportPolicy;
- (void)setReportPolicy:(unsigned long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end
