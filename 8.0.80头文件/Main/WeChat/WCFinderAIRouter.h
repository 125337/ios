@interface WCFinderAIRouter : NSObject
+ (id)functionalParamsWithFromSessionId:(id)arg1 reportDict:(id)arg2;
+ (void)openFinderWithParams:(id)arg1 currentNavController:(id)arg2;
+ (id)getExportIDWithXMLString:(id)arg1;
+ (id)getShareURLWithXMLString:(id)arg1;
+ (void)transferXMLArray:(id)arg1 successful:(id /* block */)arg2 failBlock:(id /* block */)arg3;
+ (id)demoXMLString;
@end
