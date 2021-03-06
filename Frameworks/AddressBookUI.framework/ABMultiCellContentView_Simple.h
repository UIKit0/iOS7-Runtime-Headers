/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, ABHighlightingTextField;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {
    ABHighlightingTextField *_textField;
    NSString *_previousValue;
}

@property(readonly) NSString * text;

+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;

- (void)textFieldTextDidChange:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (id)pickerView;
- (id)viewForFirstResponder;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (BOOL)canHandleProperty:(int)arg1;
- (BOOL)wantsLabelDivider;
- (void)setAbCellStyle:(int)arg1;
- (void)reloadFromModel;
- (void)reload;
- (id)text;
- (void)dealloc;
- (struct { id x1; unsigned int x2; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;

@end
