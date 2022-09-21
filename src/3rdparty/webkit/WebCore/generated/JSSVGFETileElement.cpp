/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFETileElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGFETileElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFETileElement);

/* Hash table */

static const HashTableValue JSSVGFETileElementTableValues[10] =
{
    { "in1", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementIn1), (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementX), (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementY), (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementWidth), (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementHeight), (intptr_t)0 },
    { "result", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementResult), (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementClassName), (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementStyle), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETileElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFETileElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGFETileElementTableValues, 0 };
#else
    { 34, 31, JSSVGFETileElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGFETileElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFETileElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFETileElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGFETileElementConstructorTableValues, 0 };
#endif

class JSSVGFETileElementConstructor : public DOMConstructorObject {
public:
    JSSVGFETileElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGFETileElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGFETileElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGFETileElementConstructor::s_info = { "SVGFETileElementConstructor", 0, &JSSVGFETileElementConstructorTable, 0 };

bool JSSVGFETileElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFETileElementConstructor, DOMObject>(exec, &JSSVGFETileElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFETileElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFETileElementConstructor, DOMObject>(exec, &JSSVGFETileElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFETileElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGFETileElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFETileElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFETileElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSSVGFETileElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFETileElementPrototype::s_info = { "SVGFETileElementPrototype", 0, &JSSVGFETileElementPrototypeTable, 0 };

JSObject* JSSVGFETileElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFETileElement>(exec, globalObject);
}

bool JSSVGFETileElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFETileElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFETileElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFETileElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFETileElement::s_info = { "SVGFETileElement", &JSSVGElement::s_info, &JSSVGFETileElementTable, 0 };

JSSVGFETileElement::JSSVGFETileElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFETileElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFETileElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFETileElementPrototype(JSSVGFETileElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFETileElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFETileElement, Base>(exec, &JSSVGFETileElementTable, this, propertyName, slot);
}

bool JSSVGFETileElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFETileElement, Base>(exec, &JSSVGFETileElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFETileElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFETileElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFETileElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFETileElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFETileElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFETileElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFETileElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFETileElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* castedThis = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFETileElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFETileElement* domObject = static_cast<JSSVGFETileElement*>(asObject(slotBase));
    return JSSVGFETileElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFETileElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFETileElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGFETileElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGFETileElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFETileElement* castedThisObj = static_cast<JSSVGFETileElement*>(asObject(thisValue));
    SVGFETileElement* imp = static_cast<SVGFETileElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
