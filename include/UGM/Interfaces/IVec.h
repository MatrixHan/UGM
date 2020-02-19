#pragma once

#include "IAdd.h"
#include "IScalarMul.h"

namespace Ubpa {
	template<typename Base, typename Impl, typename T, typename N>
	struct IVec : SIVT_CRTP<TemplateList<IAdd, IScalarMul>, Base, Impl, T, N> {
		SIVT_CRTP<TemplateList<IAdd, IScalarMul>, Base, Impl, T, N>::SI_CRTP;
	};
}