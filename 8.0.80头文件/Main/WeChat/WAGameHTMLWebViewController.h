@interface WAGameHTMLWebViewController : WAHTMLWebViewController
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (BOOL)allowsAutoMediaPlay;
- (void)initAddressBarLabel;
@end
