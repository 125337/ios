@interface WCFinderPublishedVisibilityViewController : WCFinderFeedVisibilityViewController
{
    WCFinderDataItem * _dataItem; // +0x70
    id /* block */ _saveHandler; // +0x78
    NSUUID * _submissionIdentifier; // +0x80
}
+ (unsigned long long)optionsForDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 visibility:(id)arg2 saveHandler:(id /* block */)arg3;
- (void)saveSelection:(id)arg1;
- (void)submitSelection:(id)arg1;
- (void)setSubmissionInteractionEnabled:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id /* block */)saveHandler;
- (void)setSaveHandler:(id /* block */)arg1;
- (id)submissionIdentifier;
- (void)setSubmissionIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
