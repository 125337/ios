@interface WAJSEventHandler_getWxCommFont : WAJSEventHandler_BaseEvent
- (hb_subset_input_t *)CreateSubsetInput:(id)arg1;
- (id)subsetFont:(id)arg1 codes:(id)arg2 fontFamilyNameMatch:(id)arg3;
- (BOOL)isSafePath:(id)arg1;
- (void)handleJSEvent:(id)arg1;
@end

